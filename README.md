# All-Knowing-Calculator
The project, "All_Knowing_Calculator", is my very first GitHub project. The intent here is to begin learning how to program is C++, Python, etc. by creating something that I, or anyone else, can use.

The goal of this project is to do the following:
  -
  - Create a calculator that can read inputs and outputs solutions to problems in:
      - algebra (addition, subtraction, multiplication, devision)
      - calculus I (Derivatives, integrals, limits)
      - linear algebra (matrices and all of the fun ways to manipulate them)
      - differential equations (Approximation methods, laplacian solutions, etc.)
  - Create that calculator in several languages
  - Maaaaaaaybe... make an app or website??? (IDFK how deep I'll go into this)

It's as simple as that. 

I'm hoping to learn a lot about these languages and make something kind of useful :D

RULES (For myself): 
- 
By the way, I will not be using AI at any point to figure any of this out. I do not plan to use it at all through any of my projects.
Any information that I looked up will be stored in a document where I, and you, can find them. That way we can go back if we forgot something and can learn from scratch.

Note about my experience:
- 
I've literally taken two classes that had anythig to do with learning how to code. One was really cruddy and did not really prepare me for the second one (Which was great, but it killed me).
I've worked on a bit of stuff for arduino (Made(Strong word. It's still half done) one really shitty class/library and have made motors go brrr, lights blink, etc.) which is more about code solutions that programming.
Finally, I played "The Farmer Was Replaced" for 25 hours and made one successful program that makes my drone farm and plant stuff pretty evenly. I'll attach the code below lol.

So... yeah I'm basically starting from like level 4 or 5 out of 100. Hopefully this brings me a little closer to my goals by the end 'XD 

Program I made in "The Farmer Was Replaced": (Sorry. Everything looks goofy. I'm trying to figure this out)
-


Main
-

	#CLASS_Farmer.Farm_brain.Here(), can't call nested functions
	CLASS_Farmer.Work()
	move(East)

while True:
	main()


CLASS_Farmer:
-

import FUNCTION_Checker
import FUNCTION_Position

def Work():
	for i in range(get_world_size()):
		return FUNCTION_Checker.checker()


FUNCTION_Checker:
-
chess = get_ground_type() # 


def position():
	x = get_pos_x()
	y = get_pos_y()
	position = (x, y)
	return position
	print("I am here, ", position)


def checker():

	for i in range(get_world_size()):
		a = get_entity_type()
		if a == Entities.Grass:
			if can_harvest():
			#do_a_flip()
			#print("shit looks like grass to me")
				harvest()
				till()
				plant(Entities.Pumpkin)
				move(North)
			else:
				use_item(Items.Water)
		elif a == Entities.Dead_Pumpkin:
				harvest()
				till()
				plant(Entities.Tree)
				move(North)
		elif a == Entities.Tree:
			if can_harvest():
			#do_a_flip()
			#print("it's a tree.")
				harvest()
				till()
				plant(Entities.Bush)
				move(North)
			else:
      use_item(Items.Fertilizer)
		elif a == Entities.Carrot:
			if can_harvest():
			#do_a_flip()
			#print("...Carrot.")
				harvest()
				till()
				plant(Entities.Pumpkin)
				move(North)
			else:
  				use_item(Items.Water)
    elif a == Entities.Bush:
      if can_harvest():
      #do_a_flip()
      #print("we love a good bush 'round here")
        harvest()
        till()
        plant(Entities.Carrot)
        move(North)
       else:
      use_item(Items.Water)
		elif a == Entities.Pumpkin:
			if can_harvest():
				harvest()
				till()
				plant(Entities.Bush)
				move(North)
			else:
				use_item(Items.Fertilizer)
		else:
			till()
			plant(Entities.Carrot)
			move(North)
			 
