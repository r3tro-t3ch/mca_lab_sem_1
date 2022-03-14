import random

# exceptions
class IncrementException(Exception):
    pass

class LadderException(Exception):
    def __init__(self, ladder):
        self.ladder = ladder

class SnakeException(Exception):
    def __init__(self, snake):
        self.snake = snake

class UnintializedGameException(Exception):
    pass


# helper class
class Snakes:
    def __init__(self, head, tail):
        self.head = head
        self.tail = tail

class Ladders:
    def __init__(self, top, bottom):
        self.bottom = bottom
        self.top = top

class Users:
    def __init__(self, name):
        self.position = 0
        self.name = name

    def climb_ladder(self, ladder):
        self.position = ladder.top

    def snake_bite(self, snake):
        self.position = snake.tail

    def move_ahead(self, moves):
        self.position += moves


# global variables
snakes = list()
ladders = list()
user_1 = None
user_2 = None


# utilities methods
def roll_dice():
    return random.randint(1,6)

def init_game():

    global snakes, ladders, user_1, user_2

    # init snakes
    snakes.append(Snakes(61,23))
    snakes.append(Snakes(99,6))
    snakes.append(Snakes(76,67))
    snakes.append(Snakes(92,73))
    snakes.append(Snakes(49,7))

    # init ladders
    ladders.append(Ladders(96,42))
    ladders.append(Ladders(63,35))
    ladders.append(Ladders(65,3))
    ladders.append(Ladders(87,48))
    ladders.append(Ladders(54,10))

    # init users
    user_1 = Users(str(input("User 1 name : ")))
    user_2 = Users(str(input("User 2 name : ")))

def Main():

    try:
        init_game()
    
        if len(snakes) == 0 or len(ladders) == 0 or user_1 == None or user_2 == None:
            raise UnintializedGameException

        current_player = user_1

        roll = 0

        while True:
    
            try:
                
                # check if games has ended
                if user_1.position == 100:
                    print("User 1 wins")
                    break
                elif user_2.position == 100:
                    print("User 1 wins")
                    break

                n = int(input("Enter 1 for {} to roll : ".format(current_player.name)))
                roll = roll_dice()
                
                if roll + current_player.position > 100:
                    raise IncrementException

                # update player position
                current_player.move_ahead(roll)

                # check for ladders
                for i in ladders:
                    if i.bottom == current_player.position:
                        raise LadderException(i)
                        

                # check for snakes
                for i in snakes:
                    if i.head == current_player.position:
                        raise SnakeException(i)

            except IncrementException:
                print("{0} cannot move ahead as position is {1} and roll is {2}".format(current_player.name, current_player.position, roll))
                
            except LadderException as e:
                current_player.climb_ladder(e.ladder)
                print("{0} climbed ladder at pos {1}".format(current_player.name, e.ladder.bottom))

            except SnakeException as e:
                current_player.snake_bite(e.snake)
                print("{0} got bit by the snake at pos {1}".format(current_player.name, e.snake.head))

            finally:
                if current_player == user_1:
                    current_player = user_2
                else:
                    current_player = user_1

                print("Roll : ",roll)
                print("{0}, position {1}".format(user_1.name, user_1.position))
                print("{0}, position {1}".format(user_2.name, user_2.position))


    except UnintializedGameException:
        print("Game not initialized")
    
# run program
Main()