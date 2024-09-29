
const months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", 
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"];
let monthdisplayed = 0;

const monthDisplay = document.getElementById("showmonth");
const lastMonthButton = document.getElementById("lastmonth");
const nextMonthButton = document.getElementById("nextmonth");

function updateMonthDisplay() {
monthDisplay.textContent = `Calender ${months[monthdisplayed]}`;
}

lastMonthButton.addEventListener("click", () => {
monthdisplayed = (monthdisplayed === 0) ? 11 : monthdisplayed - 1;
updateMonthDisplay();
});

nextMonthButton.addEventListener("click", () => {
monthdisplayed = (monthdisplayed === 11) ? 0 : monthdisplayed + 1;
updateMonthDisplay();
});

updateMonthDisplay();