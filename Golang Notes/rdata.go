/* 
The range form of the for loop iterates over a slice or map. 

2 values are returned for **each** iteration. 

_ is the index (in this example) 
eachline is a copy of the element at that index (the records or values in the csv file 

Run: 
go run rdata.go	
**Change rd2.csv to the csv file that you are want to open** 
*/
package main
import (
"encoding/csv"//csv.NewReader(), ReadAll() csv file reader
"fmt"//accepts input and produces output
"os" //os.Open method opens the csv file
)

func main() {

	file, err := os.Open("rd2.csv") //reading the csv file
	if err != nil {
		panic(err) // if there is an error panic
	}
	reader := csv.NewReader(file) //reading the csv file
	records,_ := reader.ReadAll() 

	for _, eachline := range records {
		fmt.Println(eachline[0]) //prints the 0th element

	}


}

