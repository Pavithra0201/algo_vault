SELECT 
    lib.book_id,
    lib.title,
    lib.author,
    lib.genre,
    lib.publication_year,
    COUNT(bo.book_id)  AS current_borrowers
FROM 
    library_books lib
    
JOIN 
    borrowing_records bo ON bo.book_id = lib.book_id
    where bo.return_date is NULL
GROUP BY 
    lib.book_id, lib.title, lib.author, lib.genre, lib.publication_year, lib.total_copies
    
HAVING 
    lib.total_copies = COUNT(*)
    order by current_borrowers desc
    , lib.title asc;
