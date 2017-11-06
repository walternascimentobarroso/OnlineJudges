select products.name, providers.name
from products
JOIN providers
ON products.id_providers=providers.id
where products.id_categories = 6;
