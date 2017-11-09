select categories.name, sum(products.amount)
from products
inner join categories
on products.id_categories = categories.id
GROUP BY categories.name;
