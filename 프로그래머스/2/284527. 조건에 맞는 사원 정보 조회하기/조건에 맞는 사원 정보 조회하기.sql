-- 코드를 작성해주세요
SELECT SUM(C.SCORE) as SCORE, B.EMP_NO, B.EMP_NAME, B.POSITION, B.EMAIL
FROM 
HR_EMPLOYEES as B
JOIN HR_GRADE as C
ON B.EMP_NO = C.EMP_NO
GROUP BY B.EMP_NO
ORDER BY SCORE desc limit 1;