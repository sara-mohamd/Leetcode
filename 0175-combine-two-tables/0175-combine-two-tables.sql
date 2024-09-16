SELECT P.firstName, P.lastName, Ad.city, Ad.state
FROM Person AS P
LEFT JOIN Address AS Ad ON Ad.personId = P.personId;
