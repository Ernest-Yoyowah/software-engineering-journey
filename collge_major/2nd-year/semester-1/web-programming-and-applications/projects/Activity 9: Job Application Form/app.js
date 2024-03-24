const form = document.getElementById("submit");

const experienceRange = document.getElementById("experience");
const experienceValue = document.getElementById("experienceValue");

experienceRange.addEventListener("input", function () {
  experienceValue.textContent = this.value;
});
