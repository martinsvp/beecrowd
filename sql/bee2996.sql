SELECT p.year, s.name AS sender, r.name AS receiver
FROM packages p
JOIN (SELECT * FROM users WHERE address <> 'Taiwan') s ON p.id_user_sender = s.id
JOIN (SELECT * FROM users WHERE address <> 'Taiwan') r ON p.id_user_receiver = r.id
WHERE (p.color = 'blue' OR p.year = 2015)
ORDER BY p.year DESC;

-- RESOLUÇÃO 01 - BeeCrowd não aceita por causa dos alias:

-- SELECT p.year, sender_user.name AS sender, receiver_user.name AS receiver
-- FROM packages p
-- JOIN users sender_user ON sender_user.id = p.id_user_sender
-- JOIN users receiver_user ON receiver_user.id = p.id_user_receiver
-- WHERE (p.color = 'blue' OR p.year = 2015) AND sender_user.address <> 'Taiwan' AND receiver_user.address <> 'Taiwan'
-- ORDER BY p.year DESC;
