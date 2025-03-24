import React, { useState } from "react";
import "bootstrap/dist/css/bootstrap.min.css";

const Counter = () => {
    const [count, setCount] = useState(0);

    return (
        <>
        <div className="container mt-5 text-center">
            <h2>Counter App</h2>
            <p className="fs-1 mt-5">Current Count: <strong>{count}</strong></p>
            <button style={{position:"absolute", top:"250px", left:"50%", transform: "translateX(-50%)", height:"120px", width:"500px"}} className="btn btn-primary" onClick={() => setCount(count + 1)}>
                Increment
            </button>
        </div>

            <footer style={{ position: "fixed", bottom: "0px", backgroundColor: "#3c3c3c", width: "100vw", color: "white", padding: "10px" }}>
                <h3>LAB EXERCISE</h3>
                <p>Task: Create the following React components:</p>

                <ul>
                    <li><strong>UserCard Component:</strong> Accepts <code>name</code>, <code>age</code>, and <code>location</code> as props and displays them in a card format.</li>
                    <li><strong>Counter Component:</strong> Includes a button that increments a count value using React state and displays the current count on the screen.</li>
                </ul>
            </footer>

        </>

    );
};

export default Counter;
