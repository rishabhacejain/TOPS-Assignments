import React from 'react'
import "bootstrap/dist/css/bootstrap.min.css";



const UserCard = ({ name, age, location }) => {

    return (
        <>
            <div className="card text-center shadow-sm mx-auto mt-3" style={{ width: "18rem" }}>
                <div className="card-body">
                    <h5 className="card-title">{name}</h5>
                    <p className="card-text"><strong>Age:</strong> {age}</p>
                    <p className="card-text"><strong>Location:</strong> {location}</p>
                </div>
            </div>

            <footer style={{ position: "fixed", bottom: "0px", backgroundColor: "GrayText", width: "100vw", color: "white", padding: "10px" }}>
                <h3>LAB EXERCISE</h3>
                <p>Task: Create the following React components:</p>

                <ul>
                    <li><strong>UserCard Component:</strong> Accepts <code>name</code>, <code>age</code>, and <code>location</code> as props and displays them in a card format.</li>
                    <li><strong>Counter Component:</strong> Includes a button that increments a count value using React state and displays the current count on the screen.</li>
                </ul>
            </footer>

        </>
    )
}



export default UserCard