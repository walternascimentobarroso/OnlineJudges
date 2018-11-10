SELECT p.name,  pr.name, c.name
FROM providers pr
join products  p 
on(p.id_providers = pr.id)
join categories  c
on(c.id = p.id_categories)
where pr.name = 'Sansul SA'
and c.name = 'Imported';
