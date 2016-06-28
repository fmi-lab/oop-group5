###Final Exam  

#### 28.06.2016

[Upload Link](https://my.pcloud.com/#page=puplink&code=1g4ZQUiuHzKVC4u9YY8JSnPROFCBU3AV)

The companies dealing with mixed martial arts promotions are really successful lately. You wonder - "Isn't there an unexplored idea, which has the potential of the becoming as successful as .. for example - the UFC?".
You come up with the idea to host fights between different fight clubs. They are happening anyway so why not take the opportunity to make some money out of it.

There are three types of fighters you will allow in your fights:
* Boxers
* Jiu-Jitsu Fighters
* MMA Fighters


Every Fighter has:
* name
* age
* weight
* height

Every Fighter's power is determined by a **method** called **power()** (suprise!)


Every Boxer has:
* punch strength (number in the range of [1, 10])
* punch speed (number in the range of [1, 5])

The power of a boxer is his punch power. You can calculate the punch power with the following formula:  
Punch Power = 10 * punch strength * mass index * punch speed.
mass index = weight / height^2.
In the formula above the height is in meters.

Every Jiu-Jitsu Fighter has a belt showing his skills in this martial art.
There are seven types of belts - white(1), blue(2), purple(3), brown(4), black(5), coral(6) and  red(7).
The power of the jiu-jitsu fighter is (his **height** + his **weight**) * **the number(power) of his belt**.
In the formula above the height is in centimeters.

MMA-Fighter is a fighter, who has practiced both Boxing and Jiu-Jitsu. His power is determined in the following way:  
3/5 * Jiu-Jitsu power + 2/5 * Boxing power

Every Club has:
* name
* gym with lots of different fighters

In the club some fighters leave from time to time and others come in, so you should be able to **add** and **remove** fighters from the club.
Every time too many fighters come and the gym fills with fighters the owner buys a gym, which is twice as big as the old one.
On the other hand, if too many fighters leave and the current gym is bigger than it needs to be(Only 30% of the gym is full with fighters), the owner buys new one, which is with size = 1/2 * size of the old one.


Finally, make a method Fight, which takes as arguments two clubs and returns the name of the winner club.
If one of the clubs has more fighters, then the difference between the sizes is converted in wins for the bigger club.
(For example: suppose that club1 has 2 fighters and club2 has 4. Then the first fighter from club1 faces the first one from club2. Then second vs second. After the two fights club2 gets 2 extra wins)
If two fighters have the same power then none of the clubs gets a win. The winner is the club with the higher value of wins.
In case the clubs have the same value of wins then the most powerful fighters from both clubs fight determine the winner club.
If the the most powerful fighters are equally powerful then the function returns the string "The two clubs lose".

