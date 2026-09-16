show databases;
use test;
show tables;
CREATE TABLE Employees (
    emp_id INT PRIMARY KEY,
    name VARCHAR(50),
    salary INT,
    dept_id INT,
    manager_id INT
);

CREATE TABLE Departments (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50)
);

-- Departments
INSERT INTO Departments (dept_id, dept_name) VALUES
(1, 'Engineering'),
(2, 'Sales'),
(3, 'HR'),
(4, 'Marketing');

-- Employees
INSERT INTO Employees (emp_id, name, salary, dept_id, manager_id) VALUES
(1, 'Aarav',   90000, 1, NULL),
(2, 'Bhavya',  75000, 1, 1),
(3, 'Chirag',  60000, 1, 2),
(4, 'Divya',   95000, 2, NULL),
(5, 'Esha',    50000, 2, 4),
(6, 'Farhan',  50000, 2, 4),
(7, 'Gauri',   40000, 3, NULL),
(8, 'Harsh',   45000, 3, 7),
(9, 'Isha',    30000, NULL, NULL),   -- no department, for LEFT JOIN practice
(10, 'Jatin',  55000, 4, NULL);

-- 3rd highest salary
SELECT DISTINCT salary
FROM Employees
ORDER BY salary DESC
limit 1 offset 2;

-- 3rd highest salary(other method) more optimal
select salary from(
select salary,
dense_rank() over (order by salary desc )as rnk from Employees) t
where rnk =3;

-- find duplicate rows
select name,count(*) as cnt
from Employees
group by name 
having cnt>1;

-- Second Highest Salary Without LIMIT
select max(salary) from Employees
where salary <(select max(salary) from Employees);


