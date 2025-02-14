# CS121fileIO

## include 
```
iostream
fstream
sstream
```
## main
```
ifstream inFile
string currentLine
stringstream converter
int counter
string sNum1
string sNum2
string text
int totalnum
int num1
int num2

inFile.open('data.csv)
while(getline(inFile, currentLine)):
  converter.clear()
  converter.str(currentLine)

  getline(converter, sNum1, ',')
  getline(converter, sNum2, ',')
  getline(converter, text, ',')

  converter.clear()
  converter.str("")
  converter sNum1 sNum2
  converter num1 num2

  totalnum = num1 + num2
  for(int i=0; i<totalnum; i++):
    print text
  print endl

inFile.close()
return 0
```
