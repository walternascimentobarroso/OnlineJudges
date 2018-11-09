SELECT p.name,  pr.name
FROM providers pr
join products  p 
on(p.id_providers = pr.id)
where pr.name = 'Ajax SA';
