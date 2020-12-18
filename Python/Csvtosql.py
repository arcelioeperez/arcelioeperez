#!/usr/bin/env python
# coding: utf-8

# In[1]:


import sqlalchemy
import pandas as pd
import pymysql


# In[2]:


from sqlalchemy import create_engine
from sqlalchemy.sql import text


# In[3]:


class Csv: 
    def __init__(self, file_name): 
        self.file_name = file_name
        global data
        data = pd.read_csv(self.file_name)
        global headers
        headers = data.dtypes.index 
    def table_columns(self): 
        self.stmt = "id INT AUTO_INCREMENT PRIMARY KEY"
        self.tmap = {'object' : 'TEXT',
            'int64' : 'INT',
            'float64' : 'FLOAT',
            'datetime64' : 'DATETIME',
            'bool' : 'TINYINT',
            'category' : 'TEXT',
            'timedelta[ns]' : 'TEXT'}
        self.headers_list = [(i, str(data.dtypes[i])) for i in headers]
        for i, h1 in enumerate(self.headers_list): 
            self.stmt += f", {h1[0]} {self.tmap[h1[1]]}"
        return self.stmt 
    class Sql: 
        def __init__(self, user, password, host, database):
            self.user = user 
            self.password = password 
            self.host = host
            #self.port = port 
            self.database = database
        """def connection(self): 
            #self.sql_engine = create_engine(f"mysql+pymysql://{self.user}:{self.password}@{self.host}:{self.port}/{self.database}?charset=utf8")
            self.sql_engine = create_engine(f"mysql://{self.user}:{self.password}@{self.host}/{self.database}")
            self.conn = self.sql_engine.connect()
            #return self.conn
        """
        def create_table(self, table_name): 
            self.table_name = table_name
            self.sql = f"CREATE TABLE IF NOT EXISTS {self.table_name} ({Csv.table_columns(self)});"
            return self.sql
        def cur_conn(self):
            """ 
            self.cur = self.conn.cursor().execute(self.sql)
            self.cur.close()
            return self.conn.commit()
            """
            self.sql_engine = create_engine(f"mysql+pymysql://{self.user}:{self.password}@{self.host}/{self.database}")
            self.connection = self.sql_engine.raw_connection()
            self.cursor = self.connection.cursor()
            self.execute = self.cursor.execute(self.sql)
            #sefl.cursor.execute(self.sql)
            self.cursor.close()
            self.connection.commit()
        def df_to_sql(self):
            self.df = pd.read_csv("ins.csv", delimiter = ",", header = None)
            self.df.to_sql(self.table_name, con = self.sql_engine, if_exists = "replace", index = False, index_label = False)
            


# In[4]:


firsttable = Csv("ins.csv")


# In[5]:


firsttable.file_name


# In[6]:


firsttable.table_columns()


# In[7]:


#user = firsttable.Sql(user = "root", password = "lacortes9", host = "localhost", port = "3306", database = "test")
user = firsttable.Sql(user = "root", password = "lacortes9", host = "localhost", database = "test")


# In[8]:


#mysql+mysqlconnector://<user>:<password>@<host>[:<port>]/<dbname>


# In[9]:


#user.connection()


# In[10]:


user.create_table(table_name = "newtable")


# In[11]:


print(user.sql)


# In[12]:


user.cur_conn()


# In[13]:


user.df_to_sql()


# In[ ]:


#Test Succesful !


# ### Credit 
# [StackOverflow](https://stackoverflow.com/questions/51236304/how-to-create-a-new-table-in-a-mysql-db-from-a-pandas-dataframe)
