secretWord = 'cum'
guessCount = 0
guessLimit = 2

print('I am cum. What am I?')
guess = input('Enter guess: ')

while (guess != secretWord) and (guessCount < guessLimit):
    guessCount += 1
    guess = input('Try again: ')
    
if (guess == secretWord) or (guessCount > guessLimit):
    print('You did it.')
else:
    print('You failed.')