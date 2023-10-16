import React from "react";
import {
  Navbar,
  SearchFeed,
  VideoDetails,
  Feed,
  ChannelDetails,
} from "./components";
import { Box } from "@mui/material";
import { BrowserRouter, Routes, Route } from "react-router-dom";
const App = () => {
  return (
    <BrowserRouter>
      <Box sx={{ backgroundColor: "#000" }}>
        <Navbar />
        <Routes>
          <Route path="/" exact element={<Feed />} />
          <Route path="/search/:searchTerm" element={<SearchFeed />} />
          <Route path="/video/:id" element={<VideoDetails />} />
          <Route path="/channel/:id" element={<ChannelDetails />} />
        </Routes>
      </Box>
    </BrowserRouter>
  );
};

export default App;
