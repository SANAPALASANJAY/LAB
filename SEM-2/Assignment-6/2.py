import random

class Rock_paper_scissors:
    def __init__(self, name, rounds):
        self.name = name
        self.rounds = rounds
        self.curr_round = 0
        self.bot_win = 0
        self.user_win = 0
        self.choices = ['rock', 'paper', 'scissors']
    
    def get_computer_choice(self):
        return random.choice(self.choices)
    
    def winner(self, user_choice, computer_choice):
        if user_choice == computer_choice:
            return 'draw'
        elif (user_choice == 'rock' and computer_choice == 'scissors') or (user_choice == 'scissors' and computer_choice == 'paper') or (user_choice == 'paper' and computer_choice == 'rock'):
            self.user_win += 1
            return 'user'
        else:
            self.bot_win += 1
            return 'computer'
    
    def game_winner(self):
        if self.user_win > self.rounds // 2:
            return f'{self.name} wins the game!'
        elif self.bot_win > self.rounds // 2:
            return 'Bot wins the game!'
        return None
    
    def play(self):
        print(f"Welcome to Rock_Paper_Scissors of {self.rounds} rounds!")
        while self.curr_round < self.rounds:
            user_choice = input("Enter rock or paper or scissors: ").lower()
            if user_choice not in self.choices:
                print("Invalid choice, try again")
                continue

            computer_choice = self.get_computer_choice()
            print(f"Computer chose: {computer_choice}")

            result = self.winner(user_choice , computer_choice)
            if result == 'draw':
                print("It's a draw!")
            elif result == 'user':
                print("You win this round!")
            else:
                print("Computer wins this round!")

                self.curr_round += 1
                the_winner = self.game_winner()
                if the_winner:
                    print(the_winner)
                    break
    
        print(f"Final Score - {self.name}: {self.user_win}, Bot: {self.bot_win}")
        print("Game Over!")


Game = Rock_paper_scissors("Sanjay", 5)
Game.play()
