import { Stack } from "@mui/material";
import React from "react";
import { categories } from "../utils/constant";

const SideBar = () => {
  return (
    <Stack
      direction="row"
      sx={{
        overflow: "auto",
        height: { sx: "auto", md: "95%" },
        flexDirection: { md: "column" },
      }}
    >
      {categories.map((category) => {
        <button>
          <span>{category.icon}</span>
          <span>{category.name}</span>
        </button>;
      })}
    </Stack>
  );
};

export default SideBar;
