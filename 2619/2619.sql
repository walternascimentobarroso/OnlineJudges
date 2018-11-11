SELECT p.name,  pr.name, p.price
FROM providers pr
JOIN products  p 
ON(p.id_providers = pr.id)
JOIN categories  c
ON(c.id = p.id_categories)
WHERE p.price > 1000
AND c.name = 'Super Luxury';
