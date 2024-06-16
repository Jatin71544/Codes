# Variable = a container for a value behaves as the value that it contains.
# Strings (str)
first_name = "Bro"
last_name = 'code'
full_name = first_name + " " + last_name

print("Hello " + full_name)
print(type(full_name))

#Note : we can combine variables together as long as hey are of same data type.abs

#integer (int)
age = 20
age += 1
print(age)
print(type(age)) #tells us the type of variable 
print("My age is: "+str(age)) # used string type casting to print a string variable with a int variable.

#Float = floating point number (a decimal number)
height = 180.4
print("My height is: "+str(height)+"cm")
print(type(height))

#Boolean 
human = True
print("Are you a human: "+str(human))
print(type(human))