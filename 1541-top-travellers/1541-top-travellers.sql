# Write your MySQL query statement below
select u.name ,
case when distance is not null
    then sum(r.distance) 
    else 0
end as travelled_distance
from users u
left join rides r on
r.user_id=u.id
group by r.user_id
order by travelled_distance desc,u.name asc;