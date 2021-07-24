# Write your MySQL query statement below
select d1.name as Department ,e1.name as Employee ,e1.salary as Salary
from Employee e1
join Department d1
on e1.DepartmentID=d1.Id
where 3> (select count(distinct e2.Salary)
           from Employee e2
           where e2.salary>e1.salary
            and e1.DepartmentID=e2.DepartmentID
            );