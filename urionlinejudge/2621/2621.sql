SELECT pr.name
FROM providers p
JOIN products pr
ON(pr.id_providers = p.id)
WHERE pr.amount > 10
AND pr.amount < 20
AND p.name LIKE 'P%';
