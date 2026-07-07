# Write your MySQL query statement below
SELECT t.Department, t.Employee, t.Salary
from (
    select d.name as Department, e.name as Employee, e.salary as Salary,
    dense_rank() over(
        partition by departmentId order by salary desc
    ) as rnk
    FROM Employee e join Department d on e.departmentId = d.id
)t where rnk<=3