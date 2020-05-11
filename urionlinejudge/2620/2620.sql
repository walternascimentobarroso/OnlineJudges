SELECT c.name, o.id 
FROM customers c
JOIN orders o
ON(o.id_customers = c.id)
WHERE o.orders_date BETWEEN '01/01/2016' AND '06/30/2016';
