SELECT DISTINCT movies.id, movies.name
FROM   movies_actors
inner join actors 
on movies_actors.id_actors = actors.id
inner join movies 
on movies_actors.id_movies = movies.id
inner join genres 
on genres.id = movies.id_genres
where genres.description = 'Action'
and actors.name = 'Marcelo Silva'
or actors.name = 'Miguel Silva';

