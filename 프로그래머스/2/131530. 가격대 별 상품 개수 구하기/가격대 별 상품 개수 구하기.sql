-- 코드를 입력하세요
SELECT TRUNCATE(PRICE, -4) as PRICE_GROUP, COUNT(PRODUCT_ID) as PRODUCTS
FROM PRODUCT
GROUP BY PRICE_GROUP
ORDER BY PRICE_GROUP;