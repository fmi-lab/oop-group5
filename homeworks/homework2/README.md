### 04.04.2016

Link for Upload: https://my.pcloud.com/#page=puplink&code=wtRZnpN06LdGzQYG1aE7VN3HBYRRBUDk

**Deadline:** ` 05.06.2016`

### Problem -> Arena Of Monsters (35 Points)

You randomly wonder in a world where monsters exist. You look around and discover that there are all kinds of monsters.
You soon find out that one of the most important event in this world is an epic battle between monsters held every year. 
It is held in a huge arena in the center of the capital of the only country in this world.
The build up to it is huge and everybody is involved. *16 armies* of monsters led by rich lords who bought the monsters and formed the army participate.
The winner of the battle is given a fortune and earns a lot of fame.
You manage to get to organize the arena. By doing it you are able to earn fame and fortunes. This chance is rarely given to a newcomer like you
and the responsibility is huge, so you must be sure that everything will go right.
The monsters available on the monster market are the following : *Titans, Dragons, Phoenixes, Demons, Cyclops, Werewolves, Vampires and Ogres*

Every monster has:
* name
* health points
* damage
* dodge chance (floating point number between 0 and 1. It represents the chance the monster has to dodge an attack from an opponent)

Every monster can attack an opponent monster. It is important for you to know if a monster is alive at anytime and to be able to call out the monsters in front of the whole arena (print them)

The monsters in the market are separated in *three* groups:  

1. Damage buff monsters
* Demons
* Ogres
* Titans
These monsters have x% chance to increase their attack by 10 % every time they attack another monster. (example: 50% chance to increase their attack with 10%)  
In case they happen to buff their damage then they first buff and then still attack the opponent monster. 

2. Regenerating monsters
* Vampires
* Werewolves
These monsters have x% chance to regenerate 30 % of their health points every time they attack another monster. 
In case they happen to regenerate their health then they first regenerate and then still attack the opponent monster.   

3. Bonus damage monsters
* Dragons
* Phoenixes
* Cyclops
These monsters have x% chance to deal bonus 50% damage to their opponent only in the current attack 

Here are some specific characteristics for every monster:
* Demons have maximum of 500 health points and minimum of 100 attack points(damage)
* Ogres have minimum of 500 health points and maximum of 0.3 dodge chance
* Titans have minimum of 800 health points
* Vampires have minimum of 60 attack points and 
* Werewolves have minimum of 0.5 dodge chance
* Dragons have minimum of 100 attack points and minimum of 600 health points
* Phoenixes have maximum of 500 health points
* Cyclops have minimum of 700 health points

You should have a class for every monster and group them in the proper hierarchy. 
Now you have to take care of the monster army. Every monster army should be consisted of at least 5 monsters.
The arena is built in a way that every monster faces only one of the opponent's monsters. The two monster armies enter a short tunnel which can't fit
more than one monster side by side. They enter in particular order (Example: Entrance -> Dragon -> Cyclop -> Vampire -> Phoenix -> Titan -> Exit) and 
when the first monsters are finished fighting (one of them is dead) you remove the loser monster from the arena and allow the next monster from the
loser army to enter in order to face the same one that beat their first. When a monster wins a battle you help him recover for 200 hp before facing the other one. 
The battle is held while both monster armies have at least one alive monster in them.
When one of the armies dies the other is the winner and continues in the tournament. 
The monsters can enter only from the back of the tunnel and come out only from the front.
You only get full points by implementing the monster army with a queue. Array implementation will give you less points.

The monster army has:
* name
* owner's name

Things you should be able to do with the army:
* add monsters in the back
* remove monsters from the front (entering the arena)
* check the size of it
* check if it is ready(has more than 5 monsters)
* print it. 
Also think carefuly of which type you will make it. 

Now once you got the monsters and the monster army set up you can finally set up The Great Arena Tournament.
The arena tournament consists of 16 or less monster armies. The tournament starts automatically once the number of monster armies reaches 16.

You should be able to do the the following with the arena in order to organize the tournament properly:
* add monster armies
* get armies by army name
* remove last added monster army
* organize the fight between two monsters
* organize the battle between two whole monster armies

Once the number of monster armies reaches 16 you should begin the tournament by the following [scheme](https://gyazo.com/011db0c610543d63895523df8ba2b793).
Only one monster army is the winner and everytime two monster armies face you should call the action (print everything that is happening to the console in a readable manner).

---

