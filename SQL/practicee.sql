use college;
show tables;
CREATE TABLE customer (
    customer_id INT PRIMARY KEY,
    customer_name VARCHAR(50),
    city VARCHAR(50),
    age INT
);

INSERT INTO customer VALUES
(1, 'Arjun', 'Indore', 22),
(2, 'Sneha', 'Bhopal', 25),
(3, 'Rohan', 'Indore', 21),
(4, 'Kavya', 'Delhi', 28),
(5, 'Ankit', 'Mumbai', 24),
(6, 'Meera', 'Bhopal', 26),
(7, 'Varun', 'Delhi', 23);
CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    customer_id INT,
    product VARCHAR(50),
    amount INT,
    order_date DATE
);

INSERT INTO orders VALUES
(101, 1, 'Laptop', 60000, '2026-01-10'),
(102, 2, 'Mouse', 1200, '2026-01-12'),
(103, 1, 'Keyboard', 2500, '2026-01-15'),
(104, 3, 'Monitor', 15000, '2026-02-01'),
(105, 4, 'Laptop', 65000, '2026-02-05'),
(106, 5, 'Headphones', 3000, '2026-02-10'),
(107, 2, 'Keyboard', 2200, '2026-02-15'),
(108, 6, 'Mouse', 1000, '2026-03-01'),
(109, 3, 'Laptop', 55000, '2026-03-05'),
(110, 7, 'Monitor', 18000, '2026-03-10');

# Display all customers from Indore.
select * from customer 
where city ="Indore";

#Display all orders where amount is greater than 10,000
select * from orders
where amount >10000;

#Find the maximum order amount.
select max(amount) from orders;

#Find the average order amount.
select avg(amount) from orders;

#Display orders in descending order of amount.
select * from orders
order by amount desc;

#Find the total amount spent by each customer
select customer_id,sum(amount) as total_spent
from orders
group by customer_id;

#Find the number of orders placed by each customer.
select customer_id, count(*) as total_order from orders
group by customer_id;

#Find customers who have placed more than 1 order.
select customer_id,count(*) as total_orders 
from orders
group by customer_id 
having count(*) >1;

#Find the maximum order amount for each customer.
select max(amount) as max_order
 from orders
group by customer_id;

#Display:   customer_name | product | amount
select customer.customer_name,orders.product,orders.amount
from customer 
inner join orders
on customer.customer_id=orders.customer_id;

#Display customer name and total amount spent by each customer
select customer.customer_name,sum(orders.amount) as total_amt
from customer
inner join orders
on customer.customer_id=orders.customer_id
GROUP BY customer.customer_id, customer.customer_name;

#. Find customers who have placed an order greater than 50,000.
SELECT customer.customer_name
FROM customer
INNER JOIN orders
ON customer.customer_id = orders.customer_id
WHERE orders.amount > 50000;

#Find the customer who spent the most money in total.
SELECT customer.customer_name,
       SUM(orders.amount) AS total_spent
FROM customer
INNER JOIN orders
ON customer.customer_id = orders.customer_id
GROUP BY customer.customer_id, customer.customer_name
ORDER BY total_spent DESC
LIMIT 1;

#Find orders whose amount is greater than the average order amount
select * from orders
where amount >(select avg(amount)
from orders);

#Find the second-highest order amount.
select max(amount)
from orders
where amount <(select max(amount)
from orders);

#Find the customer who placed the highest-value order.
select customer.customer_name 
from customer
inner join orders
on customer.customer_id = orders.customer_id
where orders.amount= (select max(orders.amount )
from orders);