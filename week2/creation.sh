#!/bin/bash


# Question 1
mkdir Working_Group
cd Working_Group

mkdir Budget
mkdir Communication
mkdir Projects
mkdir Others

cd Projects
mkdir P1
mkdir P2
mkdir P3

cd ..


# Question 2 
chmod 700 Budget
chmod 750 Communication
chmod 750 Projects 
chmod 750 Others

# Question 3
echo "Project Description" > Projects/P1/description.txt

# Question 4
cp Projects/P1/description.txt Projects/P2
cp Projects/P1/description.txt Projects/P3


# Question 5
cp Projects/P1/description.txt Budget
cp Projects/P1/description.txt Communication

mv Budget/description.txt Budget/budget.ax
echo "Budget file" > Budget/budget.ax

# Question 6
mv Communication/description.txt Others/others.txt
echo "Other Issues" > Others/others.txt






