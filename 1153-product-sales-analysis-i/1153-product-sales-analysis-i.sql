# Write your MySQL query statement below
SELECT Product.product_name,Sales.year,Sales.price from Sales left join product on Sales.product_id=Product.product_id;