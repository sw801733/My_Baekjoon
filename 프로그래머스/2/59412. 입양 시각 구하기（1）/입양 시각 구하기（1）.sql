-- 코드를 입력하세요
SELECT HOUR(DATETIME) as HOUR, COUNT(ANIMAL_ID) as COUNT
FROM ANIMAL_OUTS
WHERE HOUR(DATETIME) >= 9 and HOUR(DATETIME) <= 19
GROUP BY HOUR(DATETIME)
ORDER BY HOUR(DATETIME);