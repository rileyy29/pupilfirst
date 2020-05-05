open CoursesReview__Types;

let decodeProps = json =>
  Json.Decode.(
    json |> field("levels", array(Level.decode)),
    json |> field("courseId", string),
    json |> field("teamCoaches", array(Coach.decode)),
    json |> field("currentCoach", Coach.decode),
  );

let (levels, courseId, teamCoaches, currentCoach) =
  DomUtils.parseISOAttribute() |> decodeProps;

ReactDOMRe.renderToElementWithId(
  <CoursesReview__Root levels courseId teamCoaches currentCoach />,
  "react-root",
);
