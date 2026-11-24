import { useState } from "react"

const ListRender = () => {
    const [list] = useState(["Matheus", "Pedro", "Josias"]);

    const [users, setUsers] = useState ([
        {id: 1, name: "Gustavo", age: 31},
        {id: 2, name: "Pedro", age: 20},
        {id: 3, name: "João", age: 18},
    ]);

  return (
    <div>
        <ul>
            {list.map((item, i) => (
                <li key={i}>{item}</li>
            ))}
        </ul>
        <ul>
            {users.map((user) => (
                <li key={user.id}>{user.name} - {user.age} anos</li>
            ))}
        </ul>
    </div>
  );
};

export default ListRender