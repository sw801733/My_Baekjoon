-- 코드를 작성해주세요
SELECT COUNT(A.ID) as FISH_COUNT, B.FISH_NAME
FROM FISH_INFO as A
JOIN FISH_NAME_INFO as B
ON A.FISH_TYPE = B.FISH_TYPE
GROUP BY FISH_NAME
ORDER BY FISH_COUNT desc;
