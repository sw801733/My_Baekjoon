-- 코드를 입력하세요
SELECT CAR_TYPE, COUNT(CAR_ID) as CARS
FROM CAR_RENTAL_COMPANY_CAR
WHERE OPTIONS LIKE "%통풍시트%" or OPTIONS LIKE "%열선시트%" or OPTIONS LIKE "%가죽시트%"
GROUP BY CAR_TYPE
ORDER BY CAR_TYPE;