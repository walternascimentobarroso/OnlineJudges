SELECT id, name 
FROM customers
where id not in (select distinct(id_customers) from locations );
