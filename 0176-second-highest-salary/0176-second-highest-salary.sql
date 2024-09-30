# Write your MySQL query statement below

#select salary as SecondHighestSalary
#from Employee limit 1 offset 1;

Select max(salary) as SecondHighestSalary from Employee Where salary < (select max(salary) from Employee);