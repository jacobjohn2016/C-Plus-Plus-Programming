# C++ Programming

## [Leaders of Elements](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/leaders_of_elements.cpp)
Given a set of 'n' elements in an order, identify all the leaders and print them. An element is said to be a leader if all the elements to its right are smaller than it. For example, if the elements are 12, 13, 16, 7, 10 then there is only one leader element 16. If there are no leaders in the given set of elements then print 'No leaders'.

## [Cyclic Right Shift of Elements](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/cyclic_right_shift.cpp)
Given a set of elements stored in an array and a number 'm', design an Algorithm and write the subsequent C program to perform cyclic right shift of the array by 'm' places. For example, if the elements are 12, 13, 16, 7, 10 and m = 2 then the resultant set will be 7, 10, 12, 13, 16.

## [Second Smallest Number](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/second_smallest.cpp)
Given a set of elements, design an Algorithm and write the subsequent C program to determine the second smallest number in that set.

## [Recursive Fibonacci](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/fibonacci.cpp)
Given the value of 'n', write a recursive routine in C to print the first 'n' elements of the Fibonacci series. Fibonacci series is obtained by the sum of the preceding two terms in the series. The first two terms are 0 and 1.

## [Recursive reverse](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/string_reverse.cpp)
Given a string, write a recursive routine to reverse it. For example, given the string 'and', the reversal of the string is 'dna'.

## [Arrange the tiles](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/arrange_the_tiles.cpp)
In a tile game a n x n grid of tiles with numbers are given to the players. In each move then can pluck a tile in a particular square and fix it on some other square. Given the numbers written on the tiles in current configuration and the numbers written on the tiles in desired configuration, write a C++ program to determine the minimum number of moves to be made by the player to attain the desired configuration from the current configuration. For example, if the numbers on a 3X3 tile (read row wise) is 23, 12, 45, 67, 53, 11, 13, 90, 75 and the desired cofiguration is 11, 12, 13, 23, 45, 53, 67, 75, 90 then 6 moves are required.

**Input format**
* First line contains the number of tiles, n x n
* Next line contains the numbers written on the tiles in the current configuration separated by a space
* Next line contains the numbers written on the tiles in the desired configuration separated by a space

**Output format**
* Print the minimum number of moves to be made to reach desired configuration from initial configuration

## Stern-Brocot Sequence
[Array Implmentation](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/stern-brocot-array.cpp)<br/>
[Vector Implementation](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/stern-brocot-vector.cpp)<br/>
A sequence similar to fibanocci series. A sequence ‘a’ is built using the following rules:<br/>
_a<sub>0</sub> = 0_<br/>
_a<sub>1</sub> = 1_<br/>
_a<sub>2i</sub> = a<sub>i</sub>_<br/>
_a<sub>2i+1</sub> = a<sub>i</sub> + a<sub>i+1</sub>_<br/>

For example, the sequence of numbers 1, 1, 2, 1, 3 is a Stern-Brocot Sequence and 1, 1, 2, 1, 3, 2, 3, 3, 4 is not a Stern-Brocot Sequence since the eigth element is not as per rule. Given ‘n’ numbers write a C++ code to find out if it can be a Stern-Brocot Sequence when taken in order.

**Input Format**
* First line contains the number of elements, n
* Next line contains the elements separated by a space

**Output Format**
* Print Yes if the elements form Stern-Brocot Sequence and print No and the index of the first element which violates the rule

## [Numbers of Connections in mesh topology](https://github.com/jacobjohn2016/C-Plus-Plus-Programming/blob/master/mesh.cpp)
In a mesh topology, every computer is connected to every other computers in the network. Cost of connecting adajcent computers (c<sub>1</sub>) is less when compared to connecting non-adjacent computers (c<sub>2</sub>). Given the number of nodes in the network cost of connecting adjacent nodes and cost of connecting non-adjacent nodes, write a C++ code to compute the total cost involved in forming the mesh topology.

For example, if the number of nodes in the network is 5 and c<sub>1</sub> is 7 and c<sub>2</sub> is 8 then the total cost is 75.

**Input Format**
* First line contains the number of nodes in the network, n
* Next line contains the cost of connecting adjacent computer, c<sub>1</sub>
* Next line contains the cost of connecting non-adjacent computer, c<sub>2</sub>

**Output Format**
* Print the total cost incurred in building the mesh topology for the network


## Cost of Watermelon
A vendor had ‘x’ kg of watermelon in the morning and it had p1% of water. He couldn’t sell any watermelon till evening. In the evening, the percentage of water in the watermelon got decreased to p2%. Cost of one kg of watermelon was ‘c’. Find the total money the vendor would get if he can sell all the watermelon in the evening. For example, if there was 300 kg of watermelon in the morning and it had 97% of water in the morning and it had 90% of water in the evening and cost of 1kg of watermelon is Rs. 8 then the total money collected by the vendor will be Rs. 720.

**Input Format**
* First line contains the weight of watermelon with the vedor in the morning, x
* Next line contains the percentage of water in watermelon in the morning, p1
* Next line contains the percentage of water in watermelon in the evening, p2
* Next line contains the cost of one kg of watermelon, c

**Output Format**
* Print the total money that would be got after selling all watermelon in the evening