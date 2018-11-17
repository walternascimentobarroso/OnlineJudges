select c.name from customers c
join legal_person p
on(c.id = p.id_customers); 
