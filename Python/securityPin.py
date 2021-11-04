import os

def clearConsole():
    command = 'clear'
    if os.name in ('nt', 'dos'):  # If Machine is running on Windows, use cls
        command = 'cls'
    os.system(command)

pin = 0
e = 0
guessedPin = 0

pin = input("Set your PIN: ")

clearConsole()

guessedPin = input("Please enter your PIN: ")
