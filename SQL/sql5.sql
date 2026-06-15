use college;
drop table department;
CREATE TABLE Department (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50) UNIQUE NOT NULL
);

-- Create Student Table
CREATE TABLE Student1 (
    student_id INT PRIMARY KEY,                    
    name VARCHAR(50) NOT NULL,                     
    email VARCHAR(100) UNIQUE,                     
    age INT CHECK (age >= 18),                    
    city VARCHAR(30) DEFAULT 'Bhopal',           
    dept_id INT,
    
    CONSTRAINT fk_dept
    FOREIGN KEY (dept_id) REFERENCES Department(dept_id) 
);

-- Insert Data
INSERT INTO Department
VALUES (101, 'IT');

INSERT INTO Student1
(student_id, name, email, age, dept_id)
VALUES
(1, 'Shreya', 'shreya@gmail.com', 20, 101);

-- WHERE Clause Examples

-- Find student whose age is greater than 18
SELECT * 
FROM Student1
WHERE age > 18;

-- Find student from IT department
SELECT *
FROM Student1
WHERE dept_id = 101;

-- Update using WHERE
UPDATE Student1
SET city = 'Indore'
WHERE student_id = 1;

-- Delete using WHERE
DELETE FROM Student1
WHERE student_id = 1;