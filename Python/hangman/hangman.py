
from hangmanWords import word_list
from hangmanArt import stages, logo
import os
import random

print(logo)
endOfGame = False
lives = len(stages) - 1

# list of random words
chosen_word = random.choice(word_list)  # chosen a random word
wordLength = len(chosen_word)

# displays blank spaces
display = []
for letter in range(wordLength):
    display += '_'


while not endOfGame:
    # takes a guess from user
    guess = input("Guess a letter : ").lower()

    os.system('cls')  # for windows; clears the output between guesses
    # os.system('clear')  # for linux/macs

    if guess in display:
        print(f"You've already guessed {guess}")

    # checks the guess and replaces the blank with guess if correct
    for position in range(wordLength):
        letter = chosen_word[position]
        if letter == guess:
            display[position] = letter

    # Join all the elements in the list and turn it into a String.
    print(f"{' '.join(display)}")

    # If guess is not a letter in the chosen_word,
    # Then reduce 'lives' by 1.
    # If lives goes down to 0 then the game should stop and it should print "You lose."
    if guess not in chosen_word:
        print(f"You guessed {guess}, that's not in the word. You lose a life.")
        lives -= 1
        if lives == 0:
            endOfGame = True
            print('You Lose!!')

    # checks if guessed all letters
    if not '_' in display:
        endOfGame = True
        print('You Win!!')

    print(stages[lives])
