select b.product_name, a.year, a.price 
from Product b
inner join Sales a
on a.product_id = b.product_id