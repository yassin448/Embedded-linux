import os

def getEnvirVar(varName):

 return os.environ.get(varName)


varName = 'HOME'
path = getEnvirVar(varName)
print("The value of the ",{varName} ,"environment variable is: " ,{path})