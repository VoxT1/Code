# user prompts
num1 = input('enter number: ')
op = input('enter operator: ')    
num2 = input('enter another number: ')

# operator elif statements
if op == '*':
    print(float(num1) * float(num2))
elif op == '/':
    print(float(num1) / float(num2))
elif op == '+':
    print(float(num1) + float(num2))
elif op == '-':
    print(float(num1) - float(num2))

# user fucks up
else :
    print('not a valid operator.')