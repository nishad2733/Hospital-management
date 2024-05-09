*{
    margin: 0%;
    padding: 0%;
}
body{
    font-family: 'Roboto', sans-serif;
    background-color: #e6e6e6;
} 
nav{
    display: flex;
    align-items: center;
    justify-content: space-around;
    padding: 20px;
    background-color: rgb(247, 253, 253);
    color:  rgb(12, 165, 58);
    position: fixed;
    top: 0%;
    width: 100%;
}
ul{
    display: flex;
}
ul li {
    list-style: none;
}
ul li a{
    text-decoration: none;
    font-size: 20px;
    margin-inline: 20px;
    color: rgb(12, 165, 58);
}
ul li a:hover{
    color: black;
    border-bottom: 2px solid black;
}
.logo{
    font-size: 22px;
}

.main{
    display: flex;
    align-items: center;
    justify-content: space-around;
     background-color: rgb(5, 155, 30);
     color: white;
     height: 640px;
} 
.mainText h1{
    font-size: 55px;
    margin-top: 10px;
    margin-left: 50px;
    font-family: Arial, Helvetica, sans-serif;
}
.mainText p
{
    margin-top: 10px;
    margin-left: 50px;
    font-family: 'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif;
}
.mainText button{
    width: 140px;
    height: 40px;
    background-color: black;
    color: white;
    font-size: 20px;
    border: none;
    margin-top: 22px;
    
}
.mainText button:hover{
    border: 2px solid black;
    background-color: transparent;
}

.teams{
    display: flex;
    justify-content: center;
    
}
.teams .card{
    width: 300px;
    height: 390px;
    background-color: #fff;
    border-radius: 5px;
    margin-inline: 20px;   
}
.teams-1{
    display: flex;
     margin-top: 10px;
    justify-content: center;
}
.teams-1 .card{
    width: 300px;
    height: 390px;
    background-color: #fff;
    border-radius: 5px;
    margin-inline: 20px;
}
.card img{
    width: 100%;
    height: 300px;
    border-radius: 5px;
}
.card p{
    margin-top: 11px;
    margin-left: 11px;
    font-size: 15px;
}
.card h2
{
    margin-top: 10px;
    margin-left: 10px;
}
.head{
    text-align: center;
    padding: 80px;
}
/* .speciality{
    display: flex;
    
    justify-content: center;
}
.speciality .spCard{
    width: 300px;
    padding: 22px;
    background-color: #fff;
    text-align: center;
    border-radius: 5px;
    margin-top: 22px;

    margin-inline: 20px;
}
.spCard img{
    width: 200px;
}
.spCard p{
    margin-top: 11px;
} */
.reviews{
    width: 800px;
    height: 400px;
    position: relative;
    margin: auto;
    overflow: hidden;
}
.patientReview{
    display: flex;
    justify-content: center;
    width: 100%;
    height: 100%; 
    position: absolute;
    /* background-color: #fff; */
    transition: all 1s ease;
}
.patientReview img{
    width: 300px;
    margin-inline: 18px;
    border-radius: 4px;
}
.contact{
    width: 300px;
    background-color: #fff;
    padding: 22px;
    border-radius: 4px;
    text-align: center;
    margin: auto;
}
.contact input{
    width: 90%;
    font-size: 18px;
    padding: 9px;
    margin-top: 22px;
    border: none;
    outline: none;
    background-color: #e4e1e1;
    border-radius: 2px;
}
.contact button{
    width: 100px;
    height: 30px;
    background-color: rgb(13, 98, 98);
    color: white;
    font-size: 17px;
    border: none;
    margin-top: 22px;
}
.contact h1{
    color: rgb(16, 103, 103);
}
.footer{
    display: flex;
    flex-wrap: wrap;
    justify-content: space-around;
    padding: 66px;
    margin-top: 66px;
    background-color: rgb(11, 76, 76);
    color: white;
}
.text p{
    margin-top: 12px;
} 
.detail{
    display: none;
    position: fixed;
    left: 50%;
    right: 50%;
    top: 5%;
    transform: translate(-50%, 40%);
    background-color: #fff;
    padding: 22px;
    width: 400px;
    border-radius: 4px;
     
}
.content{
    display: flex;
    gap: 22px;
}
.content img{
    width: 200px;
    height: 250px;
}
.content p{
    margin-top: 22px;
}
.detail button{
    position: relative;
    top: -23px;
    left: -22px;
    width: 30px;
    height: 30px;
    background-color: rgb(12, 94, 94);
    color: white;
    font-size: 18px;
    border: none;
    border-radius: 4px;
    cursor: pointer;
}
#bar{
    display: none;
    font-size: 26px;
}
@media screen and (max-width:1100px){
    .main{
        display: block;
        text-align: center;
        /* height: auto; */
    }
    .mainText h1{
        margin-top: 76px;
    }
}

@media screen and (max-width:900px){
    ul{
        display: none;
    }
    #bar{
        display: block;
    }
}

@media screen and (max-width:850px){
    .reviews{
        width: 90%;
         
    }
    .patientReview img{
        width: 40%;
        height: 200px;
    }
}

@media screen and (max-width:600px){
    .mainText h1{
        font-size: 33px;
    }
    .mainText h3{
        font-size: 23px;
    }
    .main img{
        width: 90%;
    }
    .reviews{
        width: 80%;
    }
    .patientReview img{
        width: 40%;
        height: 160px;
        margin-inline: 6px;
    }
    .contact{
        width: 80%;
    }
    .detail{
        width: 80%;
    }
    .content{
        display: block;
        text-align: center;
    }
    .content img{
        width: 90%;
    }
}
