# Write your MySQL query statement below
select e.name from Employee a join Employee e on a.managerId=e.id
group by a.managerId
having count(e.name)>=5 or e.name is null;


