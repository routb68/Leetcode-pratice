select Email
from person
group by Email
having count(*)>1